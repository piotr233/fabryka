
#include "ConsoleMorse.h"
// wyswietl  wiadomosc w konsoli
void ConsoleMorse::emmit(MorseCode message) {

  for (int letter = 0; letter < message.size(); letter++) {
    std::cout << message[letter];
  }

}
