#include <iostream>
 
namespace kk
{
	template<typename Type, size_t sizeDst, size_t sizeSrc>
	size_t copy_array(Type (&dst)[sizeDst], Type const (&src)[sizeSrc], size_t offset = 0)
	{
		size_t i = offset, j = 0;
		while (i < sizeDst && j < sizeSrc)
			dst[i++] = src[j++];
		return j;
	}
 
	template <typename Type, size_t sizeArr>
	void print_array(Type const (&arr)[sizeArr])
	{
		for (size_t i = 0, n = sizeof(arr) / sizeof(arr[0]); i < n; ++i)
			std::cout << '[' << arr[i] << ']';
		std::cout << '\n' << std::endl;
	}
}
 
 
int main() 
{
	char arr[15] = {};
	kk::print_array(arr);
	std::cout << "1. Bytes copied: " << kk::copy_array(arr, "test") << "; Array result: ";
	kk::print_array(arr);
	std::cout << "2. Bytes copied: " << kk::copy_array(arr, "testicles", 5) << "; Array result: ";
	kk::print_array(arr);
	char arr2[1] = { 'O' };
	std::cout << "3. Bytes copied: " << kk::copy_array(arr, arr2, 1) << "; Array result: ";
	kk::print_array(arr);
	int arr3[15] = { 1,2,3,4,5,6,7,8,9,0 };
	kk::print_array(arr3);
	int arr4[2] = { 99,99 };
	std::cout << "4. Bytes copied: " << kk::copy_array(arr3, arr4, 4) << "; Array result: ";
	kk::print_array(arr3);
	std::cout << "5. Bytes copied: " << kk::copy_array(arr3, arr4, 14) << "; Array result: ";
	kk::print_array(arr3);
 
	return 0;
}