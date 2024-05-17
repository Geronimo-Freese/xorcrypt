# Hardware-based systems security

## HOW TO BUILD

Create a build directory and move into it:

`mkdir ./build && cd build`

then

`cmake ..`

then

`make`



## Assignment 1 - Task 2

Encryption of data using the One Time Pad (OTP) is both efficient and easy to understand. Sure,
it has its downsides, i. e., key exchange must take place securely, and we would need a repertoire
of key characters that is at least as long our message that we are about to send.
In this task, we take a smaller key, e. g., “my_ul71m473ly_53cur3_k3y” (length is 24), and use
this key to encrypt messages of arbitrary lengths. The first byte of the message is XOR’ed with
the first byte of the key. This repeats until byte 24 of both message and key. For byte 25 of the
message, the first byte of the key is used again. For byte 26 of the message, the second byte of
the key is used, and so on.
To implement this, is exactly your task here. Use a programming language of your choice.
Implement a simple CLI application which realizes this XOR encryption scheme to encrypt and
decrypt arbitrary data. As an argument, a key of arbitrary length should be passed. For the
sake of simplicity, we use textual keys only, no binary keys.
Since XOR encryption is symmetric, invocation for encryption and decryption is the same.
Invocation should be like a filter program, as you already know from the exercises:

`cat file | ./xorcrypt KEY > file.enc`

## Example:
### encryption
`cat thesis.pdf | ./xorcrypt 'my_ul71m473ly_53cur3_k3y' > thesis.enc.pdf`
### decryption
`cat thesis.enc.pdf | ./xorcrypt 'my_ul71m473ly_53cur3_k3y' > thesis.dec.pdf`
### verify if original and decrypted PDF are the same
`(diff thesis.pdf thesis.dec.pdf) && echo VALID ||| echo INVALID`
### Questions:
- What are the security properties of this cipher? That is: How strong is it?
- Would it be easy to crack? Explain why and perhaps how?
