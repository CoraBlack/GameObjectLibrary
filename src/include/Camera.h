#ifndef CAMERA_H
#define CAMERA_H

#include <SDL2/SDL.h>
#include "BaseObject.h"

class Camera : public BaseObject{
public:
    Camera(SDL_Window* window);
    ~Camera();

    void On_Enter();
    void On_Exit();
    void Update();

private:
    int fps = 60;       //����ĸ���֡��
    int located_x = 0;  //����ĳ���λ��x
    int located_y = 0;  //����ĳ���λ��y
    float zoom = 1.0f;  //���Ŵ�С
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;
};

#endif // CAMERA_H