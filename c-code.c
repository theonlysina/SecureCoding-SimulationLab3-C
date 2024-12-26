int getValueFromArray(int *array, int len, int index) {
	// Check if the index is within the bounds of the array
	if (index >= 0 && index < len) {
		// Return the element at the specified index
		return array[index];
	} else {
		// Handle the case where the index is out of bounds
		// You can choose to return a special value or handle it as needed
		printf("Index out of bounds\n")
		return -1; // Example of returning a special value
	} 
}
