#ifndef DEFINITIONS_H
#define DEFINITIONS_H

#include<cstdint>
#include<string>
#include<iostream>

typedef uint64_t sim_time_type;
typedef uint16_t stream_id_type;
typedef sim_time_type data_timestamp_type;
class Flag{
public:
static std::string debug_flag;
};

#define INVALID_TIME 18446744073709551615ULL
#define T0 0
#define INVALID_TIME_STAMP 18446744073709551615ULL
#define MAXIMUM_TIME 18446744073709551615ULL
#define ONE_SECOND 1000000000
typedef std::string sim_object_id_type;

#define CurrentTimeStamp Simulator->Time()
#define PRINT_ERROR(MSG) {\
							std::cerr << "ERROR:" ;\
							std::cerr << MSG << std::endl; \
							std::cin.get();\
							exit(1);\
						 }
#define DEBUGFLAG
#ifdef DEBUGFLAG
   #define DEBUGF(flag, str) do { std::cout<<"within debugf debug_flag is"<<Flag::debug_flag<<"\n"; if(Flag::debug_flag.find(flag) != std::string::npos){std::cout << flag <<": " << str << std::endl;} } while( false )
#else
    #define DEBUGF(flag, str) do {} while(false)						 
#endif 
#define PRINT_MESSAGE(M) std::cout << M << std::endl;
#define DEBUG(M) //std::cout<<M<<std::endl;
#define DEBUG2(M) //std::cout<<M<<std::endl; 						 
#define SIM_TIME_TO_MICROSECONDS_COEFF 1000
#define SIM_TIME_TO_SECONDS_COEFF 1000000000
#endif // !DEFINITIONS_H
