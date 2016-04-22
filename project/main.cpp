///***********************************************************************************
//This file is part of Project for MaratonFramework
//For the latest info, see  https://github.com/Yhgenomics/MaratonFramework.git
//
//Copyright 2016 Yhgenomics
//
//Licensed under the Apache License, Version 2.0 (the "License");
//you may not use this file except in compliance with the License.
//You may obtain a copy of the License at
//
//http://www.apache.org/licenses/LICENSE-2.0
//
//Unless required by applicable law or agreed to in writing, software
//distributed under the License is distributed on an "AS IS" BASIS,
//WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//See the License for the specific language governing permissions and
//limitations under the License.
//***********************************************************************************/
//
///***********************************************************************************
//* Description   :
//* Creator       :
//* Date          :
//* Modifed       : When      | Who       | What
//***********************************************************************************/
//
//#include <chrono>
//#include "MRT.h"
//#include <thread>
//#include <ostream>
//#include <string>
//#include <Manager.h>
//
//using namespace MRT;
//using namespace std;
//
//int main( int argc , char * argv[] )
//{
//    string t0 = "POST /task/deliver HTTP/1.1\r\nHost: 10.0.0.70:91\r\nContent-Length: 5\r\nExpect: 100-continue\r\n\r\n";
//
//    string t01 = "11";
//    string t1 = "2";
//    string t2 = "33";
//
//    auto tsize = t01.size() + t1.size() + t2.size();
//
//
//    HTTPRequest req;
//
//    req.Parse( make_uptr( Buffer , t0 ) );
//    req.Parse( make_uptr( Buffer , t01 ) );
//    req.Parse( make_uptr( Buffer , t1 ) );
//    req.Parse( make_uptr( Buffer , t2 ) );
//    
//
//    auto cs =  req.Content()->Size();
//    auto content = string( req.Content()->Data() , cs );
//
//    Maraton::Instance( )->Run( );
//
//    return 0;
//}