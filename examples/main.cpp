#include <iostream>
#include <fstream>
#include "../addr.hpp"
#include "../LibM2.hpp"
#include "MyCommand.hpp"
// define lib constructor
void __attribute__ ((constructor)) lib_main(void);
using namespace libm2;
// Revision check
std::string Revision((char*)Addr::misc::version,5);
bool RIGHTREV=Revision=="34083";
void lib_main()
{
    if (RIGHTREV){
		std::cout << "****************** Starting LibM2 Example ******************" << std::endl;
		std::cout << "**** -> http://github.com/imermcmaps/LibM2 <-" << std::endl;
		std::cout << "**** Game Revision is " << Revision << std::endl;
		try{
			// Adding MyCommand as "test"
			LibM2::addCommand("test",new MyCommand());
		}catch(MologieDetours::DetourException &e){
			std::cout << std::endl << "Error when hooking function: " << e.what() << std::endl << std::endl;
		}
		std::cout << "**** Hooking Phase completed!" << std::endl;
    }
}
