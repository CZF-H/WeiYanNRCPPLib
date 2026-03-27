//     WeiYanNRCPPLib - 此项目是为了帮助 C++ 初学者更好对接 app.llua.cn 微验api(v1) 的库文件
//     Copyright (C) 2026  CZF-H
//
//     This library is free software; you can redistribute it and/or
//     modify it under the terms of the GNU Lesser General Public
//     License as published by the Free Software Foundation; either
//     version 2.1 of the License, or (at your option) any later version.
//
//     This library is distributed in the hope that it will be useful,
//     but WITHOUT ANY WARRANTY; without even the implied warranty of
//     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//     Lesser General Public License for more details.
//
//     You should have received a copy of the GNU Lesser General Public
//     License along with this library; if not, write to the Free Software
//     Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301
//     USA
//
//     江芷酱紫, 27 March 2026, Authorized Contributor of CZF-H
//     Contact: wanjiangzhi@outlook.com

//
// Created by wanjiangzhi on 2026/1/27.
//

#ifndef WEIYAN_JSON_HPP
#define WEIYAN_JSON_HPP

#include "../third_party/nlohmann/json/single_include/json.hpp"
namespace Weiyan {
    using json = nlohmann::json;
}

#endif //WEIYAN_JSON_HPP
