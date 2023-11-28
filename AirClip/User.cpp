#include "User.h"

std::string User::getUserID() {
    return userID;
}

std::string User::getUsername() {
    return username;
}

std::string User::getPassword() {
    return password;
}

Device* User::connectDevice(const std::string &wtConnectionId) {
    // Create a newDevice and pass the wt connection ID
    auto newDevice = new Device(wtConnectionId);
    // Add the new device to the active devices
    activeDevices.emplace_back(newDevice);

    return newDevice;

    // Call createThead in Device to create a new thread for the device
    // std::thread newDeviceThread = Device::createThread();
    // Add the thread to the active device threads
    // activeDeviceThreads.push_back(std::move(newDeviceThread));
}
