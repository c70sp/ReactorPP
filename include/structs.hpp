#ifndef STRUCTS_HPP
#define STRUCTS_HPP

struct Circle{
    int x, y, r;
};

struct Point{
    int x, y;
};

struct Character{
    GLuint TextureID;       // Texture ID from the glyph
    glm::ivec2 Size;        // Size of the glyph
    glm::ivec2 Bearing;     // Offset from the baseline
    GLuint Advance;         // Horizontal offset to next glyph
};

#endif // STRUCTS_HPP