#ifndef MENU_H
#define MENU_H

#include <vector>
#include <string>

namespace lsim {
	namespace io {
		class Menu {
			public:
				Menu(std::vector<std::string> choices = std::vector<std::string>());
				void display(bool notNumerated = false);
				int awaitUserInput();
				void add(std::string nChoice);
				bool remove(std::string choice);
			private:
				std::vector<std::string> choices;
		};
	} // namespace io
} // namespace lsim

#endif // ifndef MENU_H