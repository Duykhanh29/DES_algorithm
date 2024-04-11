#pragma once
// controller.h
#pragma once
#include <string>

using namespace System;
using namespace System::IO;
namespace controllerNameSpace {
	using namespace std;
	string perform_Decryption_DES(string& fileName, string& key,string& filePath);
	string decrypt_DES(const string& ciphertext_hex, const string& key);
	string perform_Encryption_DES(string& fileName, string& key, string& filePath);
	string encrypt_DES(const string& plaintext_hex, const string& key);
	string hex_to_bin(const string& hex);

	string bin_to_hex(const string& bin);

	string bin_to_dec(const string& bin);

	string dec_to_bin(const string& dec);

	string XOR(const string& s1, const string& s2);

	string apply_s_box(const string& bit_stream);

	string apply_P(const string& bit_stream);

	string apply_IP(const string& plaintext);   // mapping table by IP data 

	string apply_IIP(const string& bit_stream);

	string apply_EP(const string& right);

	string apply_PC1(const string& key);


	string round_function(const string& left32, const string& right32, const vector<string>& subkeys);

	string read_data(const string& fileName);

	void write_data(const string& fileName, const string& data);

	vector<string> generate_subkeys(const string& key);
	string utf8_to_hex(const string& utf8String);
	string hex_to_utf8(const string& hexString);
	bool isHexadecimal(const std::string& input);
	string caculateTime(double duration);
	void createAndWriteToFile(String^ directoryPath, String^ fileName, String^ fileContent);
	bool createFile(String^ filePath);
}