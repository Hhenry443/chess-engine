//
// Created by Henry Barnes on 11/11/2026.
//

#ifndef CHESS_ENGINE_PIECE_H
#define CHESS_ENGINE_PIECE_H


class Piece {
private:
    int colour;
    int type;

public:
    Piece(int colour, int type);

    void setColour(int colour);
    void setType(int type);

    int getColour() const;
    int getType() const;
};


#endif //CHESS_ENGINE_PIECE_H
