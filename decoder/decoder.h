/*!\mainpage decoder
* ��������� �Decoding� ������������� ��� ����������� ������,\n
* ������� ��� ���������� ��������� ������ ������ �� N ��������\n 
* N � ������ ������ ������) ������������� ����� �������.\n
* 
*/

#pragma once
#include <vector>


/*! ������� �������, ������������ ������
*	\param[in\out] arrayStrings - ������, ������� ���� ������������
*	\exeption error ������, ���� ���� �� ���� ������ �� ������������� ������ ��������
*/
void decodingAllStrings(std::vector<std::string>& arrayStrings);

/*! ������� ������������� ������ ������
*	\param[in\out] arrayStrings - ������, ������� ���� ������������ 
*	\return true, ���� �������� ������ �������; false, ���� ������ �� ������������� ������ ��������
*/
bool decodingString(std::string& arrayStrings);

/*! �������, ������������ ����� �������� � ������
*	\param[in\out] stringForDetermNumb - ������, � ������� ���� ���������� ����� �������� � ������
*	\param[out] numbSymbInGroups - ����� �������� � ������
*	\return ����� �������� � ������
*/
int numbSymbolsGroups(std::string& stringForDetermNumbSymbols);


/*! �������, ����������� ������ �� ������ ����� �� �������
*	\param[in\out] stringForReverseGroups - ������ ��� ���������������
*	\param[in] numbSymbolsInGroup - ����� �������� � ������
*	\param[in] numbGroups - ����� ����� � ������
*	\return ������ �����, � ������ ������ �������� �������� ������, �� ������� ��������� ������
*/
std::vector<std::string> writeGroupsToArrayStrings(std::string& stringForReverseGroups, int numbSymbolsInGroup, int numbGroups);

/*! �������, ������������ ������ ����� �������� � ���� ������
*	\param[in] groupsOfStrings - ������ �����, ������� ���� �������� � �������� �������
*	\param[out] endString - ������������ ������
*	\return �������������� �������� ������
*/
std::string writeReverseGroups(std::vector<std::string>& groupsOfStrings);