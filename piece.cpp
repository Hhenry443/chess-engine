//
// Created by Henry Barnes on 11/11/2026.
//

#include "piece.h"

Piece::Piece(int c, int t) {
    colour = c;
    type = t;
}

void Piece::setColour(int c) {
    colour = c;
}

void Piece::setType(int t) {
    type = t;
}

int Piece::getColour() const {
    return colour;
}

int Piece::getType() const {
    return type;
}
