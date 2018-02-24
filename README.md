## Copy array with offset

- Copies one array into another.
- Safe guard with out bounds checking.
- If destination offset is provided, copies source to destination from offset.
- Templated to take any type of array.
- Returns number of bytes copied.

###### Note:

If offset is out of bounds, 0 byte is copied. If source array cannot fit into destination, it is truncated. Could take string literals as source, in which case they are treated as `const char` arrays with last element being terminating null `'\0'`. [Examples](https://ideone.com/kMQTEu).