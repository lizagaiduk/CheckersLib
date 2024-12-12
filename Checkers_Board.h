/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class Checkers_Board */

#ifndef _Included_Checkers_Board
#define _Included_Checkers_Board
#ifdef __cplusplus
extern "C" {
#endif
#undef Checkers_Board_FOCUS_TRAVERSABLE_UNKNOWN
#define Checkers_Board_FOCUS_TRAVERSABLE_UNKNOWN 0L
#undef Checkers_Board_FOCUS_TRAVERSABLE_DEFAULT
#define Checkers_Board_FOCUS_TRAVERSABLE_DEFAULT 1L
#undef Checkers_Board_FOCUS_TRAVERSABLE_SET
#define Checkers_Board_FOCUS_TRAVERSABLE_SET 2L
#undef Checkers_Board_TOP_ALIGNMENT
#define Checkers_Board_TOP_ALIGNMENT 0.0f
#undef Checkers_Board_CENTER_ALIGNMENT
#define Checkers_Board_CENTER_ALIGNMENT 0.5f
#undef Checkers_Board_BOTTOM_ALIGNMENT
#define Checkers_Board_BOTTOM_ALIGNMENT 1.0f
#undef Checkers_Board_LEFT_ALIGNMENT
#define Checkers_Board_LEFT_ALIGNMENT 0.0f
#undef Checkers_Board_RIGHT_ALIGNMENT
#define Checkers_Board_RIGHT_ALIGNMENT 1.0f
#undef Checkers_Board_serialVersionUID
#define Checkers_Board_serialVersionUID -7644114512714619750i64
#undef Checkers_Board_serialVersionUID
#define Checkers_Board_serialVersionUID 4613797578919906343i64
#undef Checkers_Board_INCLUDE_SELF
#define Checkers_Board_INCLUDE_SELF 1L
#undef Checkers_Board_SEARCH_HEAVYWEIGHTS
#define Checkers_Board_SEARCH_HEAVYWEIGHTS 1L
#undef Checkers_Board_NOT_OBSCURED
#define Checkers_Board_NOT_OBSCURED 0L
#undef Checkers_Board_PARTIALLY_OBSCURED
#define Checkers_Board_PARTIALLY_OBSCURED 1L
#undef Checkers_Board_COMPLETELY_OBSCURED
#define Checkers_Board_COMPLETELY_OBSCURED 2L
#undef Checkers_Board_WHEN_FOCUSED
#define Checkers_Board_WHEN_FOCUSED 0L
#undef Checkers_Board_WHEN_ANCESTOR_OF_FOCUSED_COMPONENT
#define Checkers_Board_WHEN_ANCESTOR_OF_FOCUSED_COMPONENT 1L
#undef Checkers_Board_WHEN_IN_FOCUSED_WINDOW
#define Checkers_Board_WHEN_IN_FOCUSED_WINDOW 2L
#undef Checkers_Board_UNDEFINED_CONDITION
#define Checkers_Board_UNDEFINED_CONDITION -1L
#undef Checkers_Board_IS_DOUBLE_BUFFERED
#define Checkers_Board_IS_DOUBLE_BUFFERED 0L
#undef Checkers_Board_ANCESTOR_USING_BUFFER
#define Checkers_Board_ANCESTOR_USING_BUFFER 1L
#undef Checkers_Board_IS_PAINTING_TILE
#define Checkers_Board_IS_PAINTING_TILE 2L
#undef Checkers_Board_IS_OPAQUE
#define Checkers_Board_IS_OPAQUE 3L
#undef Checkers_Board_KEY_EVENTS_ENABLED
#define Checkers_Board_KEY_EVENTS_ENABLED 4L
#undef Checkers_Board_FOCUS_INPUTMAP_CREATED
#define Checkers_Board_FOCUS_INPUTMAP_CREATED 5L
#undef Checkers_Board_ANCESTOR_INPUTMAP_CREATED
#define Checkers_Board_ANCESTOR_INPUTMAP_CREATED 6L
#undef Checkers_Board_WIF_INPUTMAP_CREATED
#define Checkers_Board_WIF_INPUTMAP_CREATED 7L
#undef Checkers_Board_ACTIONMAP_CREATED
#define Checkers_Board_ACTIONMAP_CREATED 8L
#undef Checkers_Board_CREATED_DOUBLE_BUFFER
#define Checkers_Board_CREATED_DOUBLE_BUFFER 9L
#undef Checkers_Board_IS_PRINTING
#define Checkers_Board_IS_PRINTING 11L
#undef Checkers_Board_IS_PRINTING_ALL
#define Checkers_Board_IS_PRINTING_ALL 12L
#undef Checkers_Board_IS_REPAINTING
#define Checkers_Board_IS_REPAINTING 13L
#undef Checkers_Board_WRITE_OBJ_COUNTER_FIRST
#define Checkers_Board_WRITE_OBJ_COUNTER_FIRST 14L
#undef Checkers_Board_RESERVED_1
#define Checkers_Board_RESERVED_1 15L
#undef Checkers_Board_RESERVED_2
#define Checkers_Board_RESERVED_2 16L
#undef Checkers_Board_RESERVED_3
#define Checkers_Board_RESERVED_3 17L
#undef Checkers_Board_RESERVED_4
#define Checkers_Board_RESERVED_4 18L
#undef Checkers_Board_RESERVED_5
#define Checkers_Board_RESERVED_5 19L
#undef Checkers_Board_RESERVED_6
#define Checkers_Board_RESERVED_6 20L
#undef Checkers_Board_WRITE_OBJ_COUNTER_LAST
#define Checkers_Board_WRITE_OBJ_COUNTER_LAST 21L
#undef Checkers_Board_REQUEST_FOCUS_DISABLED
#define Checkers_Board_REQUEST_FOCUS_DISABLED 22L
#undef Checkers_Board_INHERITS_POPUP_MENU
#define Checkers_Board_INHERITS_POPUP_MENU 23L
#undef Checkers_Board_OPAQUE_SET
#define Checkers_Board_OPAQUE_SET 24L
#undef Checkers_Board_AUTOSCROLLS_SET
#define Checkers_Board_AUTOSCROLLS_SET 25L
#undef Checkers_Board_FOCUS_TRAVERSAL_KEYS_FORWARD_SET
#define Checkers_Board_FOCUS_TRAVERSAL_KEYS_FORWARD_SET 26L
#undef Checkers_Board_FOCUS_TRAVERSAL_KEYS_BACKWARD_SET
#define Checkers_Board_FOCUS_TRAVERSAL_KEYS_BACKWARD_SET 27L
#undef Checkers_Board_boardSize
#define Checkers_Board_boardSize 8L
/*
 * Class:     Checkers_Board
 * Method:    getCellState
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_Checkers_Board_getCellState
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     Checkers_Board
 * Method:    handleMouseClick
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_Checkers_Board_handleMouseClick
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     Checkers_Board
 * Method:    handleKeyPress
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_Checkers_Board_handleKeyPress
  (JNIEnv *, jobject, jint);

/*
 * Class:     Checkers_Board
 * Method:    initializeBoard
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_Checkers_Board_initializeBoard
  (JNIEnv *, jobject);

/*
 * Class:     Checkers_Board
 * Method:    getBlackScore
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_Checkers_Board_getBlackScore
  (JNIEnv *, jobject);

/*
 * Class:     Checkers_Board
 * Method:    getWhiteScore
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_Checkers_Board_getWhiteScore
  (JNIEnv *, jobject);

/*
 * Class:     Checkers_Board
 * Method:    getSelectedPiece
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_Checkers_Board_getSelectedPiece
  (JNIEnv *, jobject);

/*
 * Class:     Checkers_Board
 * Method:    checkTheEndOfGame
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_Checkers_Board_checkTheEndOfGame
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
