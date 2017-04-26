#ifndef H_FOLDER
#define H_FOLDER

#include "File.h"
#include "AVL_Tree.h"
#include "AVL_Node.h"

class Folder
{
private:
    std::string m_folder_name;
    int m_folder_size;
    
public:
    Folder();
    Folder(std::string folder_name, int folder_size);
    
    void add_folder(std::string path, string folder_name);
    void delete_folder(std::string path, string folder_name);
};

#endif
