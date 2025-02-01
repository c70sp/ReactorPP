#version 410 core

layout(location = 0) in vec3 position;
out vec2 TexCoords;

uniform mat4 u_ModelMatrix;
uniform mat4 u_ProjectionMatrix;

void main(){
    vec4 newPosition = u_ProjectionMatrix * u_ModelMatrix * vec4(position, 1.0);
    TexCoords = vertex.zw;
}