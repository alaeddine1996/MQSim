#ifndef __DEBUG_H
#define __DEBUG_H
#define DEBUGF
#ifdef DEBUGF
   #define DEBUGF(flag, str) do { if(debug_flag.find(flag) != std::string::npos){std::cout << flag <<": " << str << std::endl;} } while( false )
#else
    #define DEBUGF(flag, str) do {} while(false)						 
#endif 
#endif  