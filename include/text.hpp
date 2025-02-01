#ifndef TEXT_HPP
#define TEXT_HPP

#define GLM_ENABLE_EXPERIMENTAL

// 3rd party libs
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>

// C++ STL
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <memory>
#include <ft2build.h>
#include FT_FREETYPE_H

// Own libs
#include "./utils.hpp"
#include "./mesh3d.hpp"
#include "./app.hpp"
#include "./structs.hpp"

class Text{
    public:
        std::map<char, Character> mCharacters;

        void loadFont(const std::string& fontPath);

    private:

};

#endif // TEXT_HPP