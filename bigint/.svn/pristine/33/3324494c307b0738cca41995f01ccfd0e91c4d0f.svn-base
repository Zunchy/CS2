// bigint Test Program
//
// Tests:  multiply, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);

		std::cout << "0 == " << left << std::endl;
		std::cout << "0 == " << right << std::endl;
		std::cout << "0 == " << result << std::endl;
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(1);
        bigint right(0);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 1);
        assert(right  == 0);
        assert(result == 0);

		std::cout << "1 == " << left << std::endl;
		std::cout << "0 == " << right << std::endl;
		std::cout << "0 == " << result << std::endl;
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(1);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 1);
        assert(result == 0);

		std::cout << "0 == " << left << std::endl;
		std::cout << "1 == " << right << std::endl;
		std::cout << "0 == " << result << std::endl;
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(123);
        bigint right(56);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==  123);
        assert(right  ==   56);
        assert(result == 6888);

		std::cout << "123 == " << left << std::endl;
		std::cout << "56 == " << right << std::endl;
		std::cout << "6888 == " << result << std::endl;
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(65);
        bigint right(321);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==    65);
        assert(right  ==   321);
        assert(result == 20865);

		std::cout << "65 == " << left << std::endl;
		std::cout << "321 == " << right << std::endl;
		std::cout << "20865 == " << result << std::endl;
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(9999);
        bigint right(2);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==  9999);
        assert(right  ==     2);
        assert(result == 19998);

		std::cout << "9999 == " << left << std::endl;
		std::cout << "2 == " << right << std::endl;
		std::cout << "19998 == " << result << std::endl;
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(2);
        bigint right(999999);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==       2);
        assert(right  ==  999999);
        assert(result == 1999998);

		std::cout << "2 == " << left << std::endl;
		std::cout << "999999 == " << right << std::endl;
		std::cout << "1999998 == " << result << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(99);
        bigint right(99);
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   ==  99);
        assert(right  ==  99);
        assert(result ==  9801);

		std::cout << "99 == " << left << std::endl;
		std::cout << "99 == " << right << std::endl;
		std::cout << "9801 == " << result << std::endl;
    }

	{
		//------------------------------------------------------
		// Setup fixture
		bigint left(8976);
		bigint right(23457);
		bigint result;

		// Test
		result = left * right;

		// Verify
		assert(left == 8976);
		assert(right == 23457);
		assert(result == 210550032);

		std::cout << "897654 == " << left << std::endl;
		std::cout << "23456789 == " << right << std::endl;
		std::cout << "21056080473006 == " << result << std::endl;
	}


    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("2222");
        bigint right("888888888888888888888888888888888888");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "2222");
        assert(right  == "888888888888888888888888888888888888");
        assert(result == "1975111111111111111111111111111111109136");

		std::cout << "2222 == " << left << std::endl;
		std::cout << "888888888888888888888888888888888888 == " << right << std::endl;
		std::cout << "1975111111111111111111111111111111109136 == " << result << std::endl;
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("777777777777777777777777777777777777777777777");
        bigint right("333333");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "777777777777777777777777777777777777777777777");
        assert(right  == "333333");
        assert(result == "259258999999999999999999999999999999999999999740741");

		std::cout << "777777777777777777777777777777777777777777777 == " << left << std::endl;
		std::cout << "333333 == " << right << std::endl;
		std::cout << "259258999999999999999999999999999999999999999740741 == " << result << std::endl;
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("111111111111111111111111111111111111111111");
        bigint right("999999999999999999999999999999999999999999");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "111111111111111111111111111111111111111111");
        assert(right  == "999999999999999999999999999999999999999999");
        assert(result == "111111111111111111111111111111111111111110888888888888888888888888888888888888888889");

		std::cout << "111111111111111111111111111111111111111111 == " << left << std::endl;
		std::cout << "999999999999999999999999999999999999999999 == " << right << std::endl;
		std::cout << "111111111111111111111111111111111111111110888888888888888888888888888888888888888889 == " << result << std::endl;
    }
    
    //Add test cases as needed.

    std::cout << "Done testing multiply" << std::endl;
}
