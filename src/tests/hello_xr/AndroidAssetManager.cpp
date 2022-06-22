////
//// Created by Caleb on 4/18/2021.
////
//
//#include "AndroidAssetManager.h"
//
//
//
//std::string AndroidAssetManager::GetAssetPath(std::string relativePath) {
//    return relativePath;
//}
//
//std::wstring AndroidAssetManager::GetAssetPath_Wide(std::wstring relativePath) {
//    return relativePath;
//}
//
//void AndroidAssetManager::LoadAssetsFromCurrentDirectory(IRenderSystem *renderSystem) {
//
//}
//
//bool AndroidAssetManager::WatchCurrentDirectoryForChanges() {
//    return false;
//}
//
//char *AndroidAssetManager::GetFileBlob(const char *path) {
//    AAsset* asset = AAssetManager_open(assetManager, path, AASSET_MODE_UNKNOWN);
//    size_t assetFileLength = AAsset_seek(asset, 0, SEEK_END);
//    AAsset_seek(asset, 0, SEEK_SET);
//    char* assetBlob = new char[assetFileLength];
//    AAsset_read(asset, assetBlob, assetFileLength);
//    return assetBlob;
//}
//
//AndroidAssetManager::AndroidAssetManager(AAssetManager *mgr) : assetManager(mgr) {
//
//}
