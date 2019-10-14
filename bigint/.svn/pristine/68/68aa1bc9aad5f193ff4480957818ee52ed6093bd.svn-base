// bigint Test Program
//
// Tests:  int constructor, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main () {
    {

        // VERY INCOMPLETE set of tests.


        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test 
        result = left + right;

        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);

	std::cout << "left = " << left << std::endl;
	std::cout << "right = " << right << std::endl; 
	std::cout << "result = " << result << std::endl;
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(0);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);

	std::cout << "left = " << left << std::endl;
	std::cout << "right = " << right << std::endl;
	std::cout << "result = " << result << std::endl;
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);

	std::cout << "left = " << left << std::endl;
	std::cout << "right = " << right << std::endl;
	std::cout << "result = " << result << std::endl;
    }
    {
      //-------------------------------------------------------
      //Setup fixture
      bigint left(9999);
      bigint right(2);
      bigint result;
      
      //Test
      result = left + right;

      //Verify
      assert(left == 9999);
      assert(right == 2);
      assert(result == 10001);

	std::cout << "left = " << left << std::endl;
	std::cout << "right = " << right << std::endl;
	std::cout << "result = " << result << std::endl;
    }
    //Test Case For Empty Bigint
    {
      //---------------------------------------------------------
      // Setup Fixture
      bigint left;
      bigint right;
      bigint result;
   
      // Test
      result = left + right;

      // Verify
      assert(left   == 0);
      assert(right  == 0);
      assert(result == 0); 

	std::cout << "left = " << left << std::endl;
	std::cout << "right = " << right << std::endl;
	std::cout << "result = " << result << std::endl;
    }

    //Test Case For 2 Digit BigInt
    {
      //--------------------------------------------------------
      //Setup Fixture
      bigint left(12);
      bigint right(10);
      bigint result;

      //Test
      result = left + right;

      //Verify
      assert(left   == 12);
      assert(right  == 10);
      assert(result == 22);

	std::cout << "left = " << left << std::endl;
	std::cout << "right = " << right << std::endl;
	std::cout << "result = " << result << std::endl;
    }

    //Test Case For Number Larger Than int Capacity
    {
      //------------------------------------------------------
      //Setup Fixture
      bigint left("6123456789123");
      bigint right("567765342456");
      bigint result;

      //Test
      result = left + right;

      //Verify
      assert(left   == "6123456789123");
      assert(right  == "567765342456");
      assert(result == "6691222131579");

	std::cout << "left = " << left << std::endl;
	std::cout << "right = " << right << std::endl;
	std::cout << "result = " << result << std::endl;
    }
    
    
    std::cout << "Done with testing addition." << std::endl;
}

