// Copyright (c) 2015 baidu-rpc authors.
// Author: Zhangyi Chen (chenzhangyi01@baidu.com)
// Date: 2015/10/10 17:55:13

#include "repeated.pb.h"
#include <gtest/gtest.h>
#include <pb_to_json.h>

class RepeatedFieldTest : public testing::Test {
protected:
    void SetUp() {}
    void TearDown() {}
};

TEST_F(RepeatedFieldTest, empty_array) {
    RepeatedMessage m;
    std::string json;

    ASSERT_TRUE(ProtoMessageToJson(m, &json));
    std::cout << json << std::endl;

    m.add_strings();
    m.add_ints(1);
    m.add_msgs();
    json.clear();
    ASSERT_TRUE(ProtoMessageToJson(m, &json));
    std::cout << json << std::endl;
}
