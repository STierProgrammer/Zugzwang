#ifndef DEFS_H
#define DEFS_H

typedef unsigned long long u64;

#define NAME "Cengine 1.0a"
#define BOARD_SQUARE_NUM 120

/*
    WP - White Pawn
    WN - White Knight
    WB - White Bishop
    WR - White Rook
    WQ - White Queen
    WK - White King
    BP - Black Pawn
    BN - Black Knight
    BB - Black Bishop
    BR - Black Rook
    BQ - Black Queen
    BK - Black King
*/
enum { EMPTY, WP, WN, WB, WR, WQ, WK, BP, BN, BB, BR, BQ, BK } Piece;

enum {
  FLAG_A,
  FLAG_B,
  FLAG_C,
  FLAG_D,
  FLAG_E,
  FLAG_F,
  FLAG_G,
  FLAG_H,
  FLAG_NONE
} FILE;

enum {
  RANK_1,
  RANK_2,
  RANK_3,
  RANK_4,
  RANK_5,
  RANK_6,
  RANK_7,
  RANK_8,
  RANK_NONE
} RANK;

enum { WHITE, BLACK, BOTH } Color;

enum {
  A1 = 21,
  B1,
  C1,
  D1,
  E1,
  F1,
  G1,
  H1,
  A2 = 31,
  B2,
  C2,
  D2,
  E2,
  F2,
  G2,
  H2,
  A3 = 41,
  B3,
  C3,
  D3,
  E3,
  F3,
  G3,
  H3,
  A4 = 51,
  B4,
  C4,
  D4,
  E4,
  F4,
  G4,
  H4,
  A5 = 61,
  B5,
  C5,
  D5,
  E5,
  F5,
  G5,
  H5,
  A6 = 71,
  B6,
  C6,
  D6,
  E6,
  F6,
  G6,
  H6,
  A7 = 81,
  B7,
  C7,
  D7,
  E7,
  F7,
  G7,
  H7,
  A8 = 91,
  B8,
  C8,
  D8,
  E8,
  F8,
  G8,
  H8,
  NO_SQUARE
} Squares;

enum { FALSE, TRUE } Bool;

typedef struct {
    int pieces[BOARD_SQUARE_NUM];
    u64 pawns[3];
    int king_sqaure[2];
    int side;
    int en_passant;
    int fifty_move;
    int ply;
    int history_ply;
    u64 position_key;
    int pieces[13];
    int big_pieces[3];
    int major_pieces[3];
    int minor_pieces[3];
} Board;

#endif