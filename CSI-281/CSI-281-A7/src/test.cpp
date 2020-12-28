//
//  test.cpp
//
//  Tests to prove your code works.
//  You SHOULD modify this file.
//
//  Copyright 2019 David Kopec
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation files
//  (the "Software"), to deal in the Software without restriction,
//  including without limitation the rights to use, copy, modify, merge,
//  publish, distribute, sublicense, and/or sell copies of the Software,
//  and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice
//  shall be included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
//  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
//  OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
//  ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.

#include "Queue.h"
#include "Stack.h"
#include "catch.h"
#include <string>

using namespace std;
using namespace csi281;

TEST_CASE("Queue Tests", "[queue]")
{
    SECTION("Queue w/ int tests")
    {
        Queue<int> q1 = Queue<int>();
        // Ensure that push(), pop(), and peek()
        // work properly in concert with getCount()
        // and remove()
        q1.push(1);
        CHECK(q1.peek() == 1);
        CHECK(q1.pop() == 1);
        q1.push(3);
        q1.push(2);
        q1.push(1);
        CHECK(q1.getCount() == 3);
        CHECK(q1.pop() != 1);
        CHECK(q1.pop() != 1);
        CHECK(q1.pop() == 1);
        q1.push(1);
        q1.push(1);
        q1.push(2);
        q1.push(1);
        q1.push(1);
        CHECK(q1.getCount() == 5);
        q1.remove(1);
        CHECK(q1.getCount() == 1);
    }

    SECTION("Queue w/ string tests")
    {
        Queue<string> q2 = Queue<string>();
        // Ensure that push(), pop(), and peek()
        // work properly in concert with getCount()
        // and remove()
        q2.push("one");
        CHECK(q2.peek() == "one");
        CHECK(q2.pop() == "one");
        q2.push("three");
        q2.push("two");
        q2.push("one");
        CHECK(q2.getCount() == 3);
        CHECK(q2.pop() != "one");
        CHECK(q2.pop() != "one");
        CHECK(q2.pop() == "one");
        q2.push("one");
        q2.push("one");
        q2.push("two");
        q2.push("one");
        q2.push("one");
        CHECK(q2.getCount() == 5);
        q2.remove("one");
        CHECK(q2.getCount() == 1);
    }
}

TEST_CASE("Stack Tests", "[stack]")
{
    SECTION("Stack w/ int tests")
    {
        Stack<int> s1 = Stack<int>();
        // Ensure that push(), pop(), and peek()
        // work properly in concert with getCount()
        // and remove()
        // YOUR CODE HERE
        s1.push(1);
        CHECK(s1.peek() == 1);
        CHECK(s1.pop() == 1);
        s1.push(1);
        s1.push(2);
        s1.push(3);
        CHECK(s1.getCount() == 3);
        CHECK(s1.pop() != 1);
        CHECK(s1.pop() != 1);
        CHECK(s1.pop() == 1);
        s1.push(1);
        s1.push(1);
        s1.push(2);
        s1.push(1);
        s1.push(1);
        CHECK(s1.getCount() == 5);
        s1.remove(1);
        CHECK(s1.getCount() == 1);
    }

    SECTION("Stack w/ string tests")
    {
        Stack<string> s2 = Stack<string>();
        // Ensure that push(), pop(), and peek()
        // work properly in concert with getCount()
        // and remove()
        // YOUR CODE HERE
        s2.push("one");
        CHECK(s2.peek() == "one");
        CHECK(s2.pop() == "one");
        s2.push("one");
        s2.push("two");
        s2.push("three");
        CHECK(s2.getCount() == 3);
        CHECK(s2.pop() != "one");
        CHECK(s2.pop() != "one");
        CHECK(s2.pop() == "one");
        s2.push("one");
        s2.push("one");
        s2.push("two");
        s2.push("one");
        s2.push("one");
        CHECK(s2.getCount() == 5);
        s2.remove("one");
        CHECK(s2.getCount() == 1);
    }
}
