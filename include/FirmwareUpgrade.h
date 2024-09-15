#ifndef _FIRMWARE_UPGRADE_H
#define _FIRMWARE_UPGRADE_H

#include <string>

class FirmwareUpgrade {
public:
    FirmwareUpgrade();
    ~FirmwareUpgrade();

    void SetCheckVersionUrl(std::string check_version_url);
    void CheckVersion();
    bool HasNewVersion() { return has_new_version_; }
    void StartUpgrade() { Upgrade(firmware_url_); }
    void MarkValid();

private:
    std::string check_version_url_;
    bool has_new_version_ = false;
    std::string firmware_version_;
    std::string firmware_url_;

    void Upgrade(std::string firmware_url);
};

#endif // _FIRMWARE_UPGRADE_H
