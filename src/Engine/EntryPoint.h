#pragma once

#ifdef EN_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv)
{
  printf("MaHOG Engine\n");
  auto app = Engine::CreateApplication();
  app->Run();
  delete app;
}
#endif