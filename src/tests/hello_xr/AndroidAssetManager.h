////
//// Created by Caleb on 4/18/2021.
////
//
//#ifndef ANDROIDTAKE4_ANDROIDASSETMANAGER_H
//#define ANDROIDTAKE4_ANDROIDASSETMANAGER_H
//#include "IAssetManager.h"
//#include <string>
//#include <android/asset_manager.h>
//#include <android/asset_manager_jni.h>
//
//class AndroidAssetManager: public IAssetManager {
//public:
//    AndroidAssetManager(AAssetManager* mgr);
//    std::string GetAssetPath(std::string relativePath);
//    std::wstring GetAssetPath_Wide(std::wstring relativePath);
//    void LoadDefaultThumbnails(IRenderSystem* renderSystem);
//    virtual void LoadAssetsFromCurrentDirectory(IRenderSystem* renderSystem);
//    bool WatchCurrentDirectoryForChanges();
//    virtual char* GetFileBlob(const char* path);
//private:
//    AAssetManager * assetManager;
//};
//
//
//#endif //ANDROIDTAKE4_ANDROIDASSETMANAGER_H
