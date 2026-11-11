//
// Created by Henry Barnes on 11/11/2026.
//

#ifndef CHESS_ENGINE_BOARD_H
#define CHESS_ENGINE_BOARD_H

/**
 * Board is a long array of integers
 * We will be working in binary through hex to represent our spaces.
 * An empty square will be represented with a 0, a filled square will be represented as follows:
 * Bit 7 - Colour (1 for black, 0 for white)
 * Bit 6 - Not used
 * Bit 5 - Not used
 * Bit 4 - Not Used
 * Bit 3 - has moved (for things like the pawns starting move being 2)
 * Bit 2 - Piece type
 * Bit 1 - Piece type
 * Bit 0 - Piece type
 *
 * Piece type is mapped as follows:
 * 1 -- Pawn
 * 2 -- Knight
 * 3 -- Bishop
 * 4 -- Rook
 * 5 -- Queen
 * 6 -- King
 * 7 -- Not used
 * 0 -- Empty Square

 * So for example, the black knight at file 8, rank B at the start of the game would be represented as
 * 1 0 0 0 0 0 1 0
 * or, as 0x82 in hex
 *
 */

class Chessboard {
private:
    int *board;
public:
    Chessboard();

    void output();

    void setupBoard();

    int getSquare(int rank, int file);
    void setSquare(int rank, int file, int colour, int type);
};


#endif //CHESS_ENGINE_BOARD_H
