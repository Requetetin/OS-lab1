#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main (int argc, char* argv[]) {
  char* source_path;
  char* destin_path;
  unsigned char buffer[2048];
  source_path = argv[1];
  destin_path = argv[2];

  int source_file, destin_file, n;
  source_file = open(source_path, O_RDONLY);
  destin_file = open(destin_path, O_CREAT | O_WRONLY);

  n = read(source_file, buffer, 2048);
  write(destin_file, buffer, n);

  close(destin_file);
  close(source_file);
}