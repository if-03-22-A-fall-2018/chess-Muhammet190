/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHDV
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			chess.c
 * Author:			P. Bauer
 * Due Date:		November 03, 2010
 * ----------------------------------------------------------
 * Description:
 * Implementation of basic chess functions.
 * ----------------------------------------------------------
 */
#include <stdlib.h>
#include "general.h"
#include "chess.h"

bool 	is_piece (struct ChessPiece pc, enum PieceColor color, enum PieceType type)
{
  if (color == pc.color && type == pc.type)
  {
    return true;
  }
  else
  {
    return false;
  }
}
void 	init_chess_board (ChessBoard chess_board)
{
  for (int i = 0; i < 8; i++)
  {
		for (int j = 0; j < 8; j++)
    {
			chess_board[i][j].is_occupied = false;
		}
	}

}
struct ChessSquare * 	get_square (ChessBoard chess_board, File file, Rank rank)
{
 if (rank < 1 || rank > 8 || file < 'a' || file > 'h')
 {
   return 0;
 }
 else
 {
   return &chess_board[rank - 1][file - 'a'];
 }
}
bool 	is_square_occupied (ChessBoard chess_board, File file, Rank rank)
{
  if (chess_board[rank -1 ][file -'a'].is_occupied == true)
  {
      return true;
  }
  else
  {
    return false;
  }

}
bool 	add_piece (ChessBoard chess_board, File file, Rank rank, struct ChessPiece piece)
{
     if (rank < 1 || rank > 8 || file < 'a' || file > 'h' || is_square_occupied(chess_board,file,rank))
     {
          return false;
     }
     else
     {
      chess_board[rank -1][file -'a'].piece = piece;
      return true;
     }
}
struct ChessPiece 	get_piece (ChessBoard chess_board, File file, Rank rank){

}
void 	setup_chess_board (ChessBoard chess_board){

}
bool 	remove_piece (ChessBoard chess_board, File file, Rank rank){

}
bool 	squares_share_file (File s1_f, Rank s1_r, File s2_f, Rank s2_r){

}
bool 	squares_share_rank (File s1_f, Rank s1_r, File s2_f, Rank s2_r){

}
bool 	squares_share_diagonal (File s1_f, Rank s1_r, File s2_f, Rank s2_r){

}
bool 	squares_share_knights_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r){

}
bool 	squares_share_pawns_move (enum PieceColor color, enum MoveType move, File s1_f, Rank s1_r, File s2_f, Rank s2_r){

}
bool 	squares_share_queens_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r){

}
bool 	squares_share_kings_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r){

}
