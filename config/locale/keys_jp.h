/* config/locale/keys_jp_us.h
 * 日本語OS(106/109)でも「US物理位置どおりの記号」が出るようにする簡易エイリアス。
 * 使い方: keymap で &kp JP_* を使う。
 *
 * 注意:
 * - OSは日本語配列のまま。
 * - ここでの JP_* は「USの物理位置・意味」を保つための“日本語OS向け送出コード”。
 * - すべて ZMK の既存キー名/モディファイア(LS(...)=左Shift)だけを使っています。
 */

#pragma once
#include <dt-bindings/zmk/keys.h>

/* 括弧・ブラケット類（USの [ ] { } を日本語OSでもそのまま出す） */
#define JP_LBKT        LEFT_BRACKET      /* [  */
#define JP_RBKT        RIGHT_BRACKET     /* ]  */
#define JP_LBRC        LS(LEFT_BRACKET)  /* {  */
#define JP_RBRC        LS(RIGHT_BRACKET) /* }  */

/* バックスラッシュ/パイプ（USの \ | を維持） */
#define JP_BSLH        BACKSLASH         /* \  */
#define JP_PIPE        LS(BACKSLASH)     /* |  */

/* クォート/セミコロン（USの ' " ; : を維持） */
#define JP_SQT         SINGLE_QUOTE      /* '  */
#define JP_DQT         LS(SINGLE_QUOTE)  /* "  */
#define JP_SEMI        SEMICOLON         /* ;  */
#define JP_COLON       LS(SEMICOLON)     /* :  */

/* イコール/プラス/マイナス/アンダーバー（USの = + - _ を維持） */
#define JP_EQUAL       EQUAL             /* =  */
#define JP_PLUS        LS(EQUAL)         /* +  */
#define JP_MINUS       MINUS             /* -  */
#define JP_UNDS        LS(MINUS)         /* _  */

/* チルダ/グレイヴ（USの ` ~ を維持） */
#define JP_GRAVE       GRAVE             /* `  */
#define JP_TILDE       LS(GRAVE)         /* ~  */

/* スラッシュ/クエスチョン（USの / ? を維持） */
#define JP_SLASH       SLASH             /* /  */
#define JP_QUEST       LS(SLASH)         /* ?  */

/* アット（USの Shift+2 = @ を維持。→ 単体で @ を出したい時に使う） */
#define JP_AT          LS(N2)            /* @  */

/* バーティカルバーや円マークが欲しければ（US準拠で） */
#define JP_YEN         NON_US_BACKSLASH  /* 環境によっては ¥ を得たい時に */
