//
//  Header.h
//  rewriteofgame
//
//  Created by xujin liu on 2019/4/24.
//  Copyright © 2019 kater-KCl. All rights reserved.
//

#ifndef tool_h
#define tool_h
#include <string>
using namespace std;
struct Ttool{
    int num;
    string name;
    int id_;
    int att;
};
Ttool tool_0={
    0,
    "管理员之刃",
    0,
    999999
};
Ttool tool[10]={tool_0};
#endif /* Header_h */
