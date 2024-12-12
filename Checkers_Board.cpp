#include "Checkers_Board.h"
#include <iostream>

enum CellState {
    EMPTY,
    WHITE_PIECE,
    BLACK_PIECE
};

const int BOARD_SIZE = 8;
CellState board[BOARD_SIZE][BOARD_SIZE];
int whiteScore;
int blackScore;
bool isWhiteTurn;
int selectedRow, selectedCol;
bool pieceSelected;
int originalRow,originalCol;

JNIEXPORT void JNICALL Java_Checkers_Board_initializeBoard(JNIEnv *, jobject) {
    isWhiteTurn = true;
    whiteScore = 0;
    blackScore = 0;
    pieceSelected = false;
    selectedRow = -1;
    selectedCol = -1;
    originalRow = -1;
    originalCol = -1;
    for (int row = 0; row < BOARD_SIZE; ++row) {
        for (int col = 0; col < BOARD_SIZE; ++col) {
            if ((row + col) % 2 == 1) {
                if (row < 3) {
                    board[row][col] = WHITE_PIECE;
                } else if (row > 4) {
                    board[row][col] = BLACK_PIECE;
                } else {
                    board[row][col] = EMPTY;
                }
            } else {
                board[row][col] = EMPTY;
            }
        }
    }
}

JNIEXPORT jint JNICALL Java_Checkers_Board_getCellState(JNIEnv *, jobject, jint row, jint col) {
    return board[row][col];
}

bool isValidMove(int fromRow, int fromCol, int toRow, int toCol) {
    if (toRow < 0 || toRow >= BOARD_SIZE || toCol < 0 || toCol >= BOARD_SIZE) {
        return false;
    }
    if (board[toRow][toCol] == EMPTY && abs(fromRow - toRow) == 1 && abs(fromCol - toCol) == 1) {
        if (isWhiteTurn && toRow > fromRow) {
            return true;
        }
        if (!isWhiteTurn && toRow < fromRow) {
            return true;
        }
    }
    if (abs(fromRow - toRow) == 2 && abs(fromCol - toCol) == 2) {
        int jumpedRow = (fromRow + toRow) / 2;
        int jumpedCol = (fromCol + toCol) / 2;

        if (isWhiteTurn && board[jumpedRow][jumpedCol] == BLACK_PIECE) {
            whiteScore++;
            board[jumpedRow][jumpedCol] = EMPTY;
            return true;
        }
        else if (!isWhiteTurn && board[jumpedRow][jumpedCol] == WHITE_PIECE) {
            blackScore++;
            board[jumpedRow][jumpedCol] = EMPTY;
            return true;
        }
    }

    return false;
}

JNIEXPORT void JNICALL Java_Checkers_Board_handleMouseClick(JNIEnv *, jobject, jint row, jint col) {
    CellState currentPlayerPiece = isWhiteTurn ? WHITE_PIECE : BLACK_PIECE;
    if (!pieceSelected) {
        if (board[row][col] == currentPlayerPiece) {
            selectedRow = row;
            selectedCol = col;
            pieceSelected = true;
            originalRow = row;
            originalCol = col;
            std::cout << "(" << row << "," << col << ")" << std::endl;
        } else {
            std::cout << "Invalid selection\n";
        }
    } else {
        if (isValidMove(originalRow, originalCol, row, col)) {
            board[row][col] = board[originalRow][originalCol];
            board[originalRow][originalCol] = EMPTY;
            pieceSelected = false;
            isWhiteTurn = !isWhiteTurn;
            std::cout <<  "(" << row << "," << col << ")" << std::endl;

        } else {
            std::cout << "Invalid move\n";
            pieceSelected = false;
        }
    }
}

JNIEXPORT void JNICALL Java_Checkers_Board_handleKeyPress(JNIEnv *, jobject, jint keyCode) {
    switch (keyCode) {
        case 38:  // Arrow up
            if (selectedRow > 0) selectedRow--;
            break;
        case 40:  // Arrow down
            if (selectedRow < BOARD_SIZE - 1) selectedRow++;
            break;
        case 37:  // Arrow left
            if (selectedCol > 0) selectedCol--;
            break;
        case 39:  // Arrow right
            if (selectedCol < BOARD_SIZE - 1) selectedCol++;
            break;
        case 32:  // Space for selecting a piece
            if (!pieceSelected) {
                CellState currentPlayerPiece = isWhiteTurn ? WHITE_PIECE : BLACK_PIECE;
                if (board[selectedRow][selectedCol] == currentPlayerPiece) {
                    pieceSelected = true;
                    originalRow = selectedRow;
                    originalCol = selectedCol;
                    std::cout << "Piece selected at (" << originalRow << ", " << originalCol << ")\n";
                } else {
                    std::cout << "Invalid selection\n";
                }
            }
            break;
        case 10: //Enter
            if (pieceSelected) {
                if (isValidMove(originalRow, originalCol, selectedRow, selectedCol)) {
                    board[selectedRow][selectedCol] = board[originalRow][originalCol];
                    board[originalRow][originalCol] = EMPTY;
                    pieceSelected = false;
                    isWhiteTurn = !isWhiteTurn;
                    std::cout << "Piece moved to (" << selectedRow << ", " << selectedCol << ")\n";
                } else {
                    std::cout << "Invalid move\n";
                    pieceSelected = false;
                }
            }
            break;
    }
}

JNIEXPORT jint JNICALL Java_Checkers_Board_getBlackScore(JNIEnv *, jobject) {
    return blackScore;
}

JNIEXPORT jint JNICALL Java_Checkers_Board_getWhiteScore(JNIEnv *, jobject) {
    return whiteScore;
}

JNIEXPORT jintArray JNICALL Java_Checkers_Board_getSelectedPiece(JNIEnv *env, jobject) {
    jintArray result = env->NewIntArray(2);
    jint temp[2] = {selectedRow, selectedCol};
    env->SetIntArrayRegion(result, 0, 2, temp);
    return result;
}
JNIEXPORT jboolean JNICALL Java_Checkers_Board_checkTheEndOfGame(JNIEnv *, jobject) {
    const int maxScore = 12;
    if (whiteScore == maxScore || blackScore == maxScore) {
        return true;
    }
    return false;
}

