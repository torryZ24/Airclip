# AirClip

## About AirClip

AirClip is a versatile web/mobile application designed for efficient clipboard history management
and synchronization across various devices and operating systems. Developed using modern C++, SQL and the Wt library,
it offers a user-friendly interface and robust features for both individual and collaborative work environments.

For any inquiries, feedback, or contributions, please feel free to contact the project's authors listed in the "Authors"
section below.

## Table of Contents

- [About AirClip](#about-airclip)
- [Key Features](#key-features)
- [Getting Started](#getting-started)
    - [Required Libraries and Third-Party Tools](#required-libraries-and-third-party-tools)
    - [Building from Source Code](#building-from-source-code)
- [Running the Application](#running-the-application)
- [Usage Guide](#usage-guide)
    - [Getting Started with AirClip](#getting-started-with-airclip)
    - [Managing Clipboard History](#managing-clipboard-history)
- [Troubleshooting](#troubleshooting)
    - [Common Issues and Solutions](#common-issues-and-solutions)
    - [Frequently Asked Questions (FAQs)](#frequently-asked-questions-faqs)
- [Authors](#authors)

## Key Features

- **Clipboard History Management**: Easily access and manage your previously copied text or images.
- **Cross-Device Synchronization**: Seamlessly synchronize clipboard content across different devices and operating
  systems.
- **User and Device Management:** Integrated management of user accounts and devices for personalized experience.
- **Web Application Interface:** Accessible via a web interface, providing flexibility and ease of use.
- **Secure Data Handling:** Emphasis on security and privacy in storing and transmitting clipboard data.

## Getting Started

To **build and run** AirClip, you will need the following libraries and tools:

### Required Libraries and Third-Party Tools

1. **Wt**: A C++ library for developing web applications.
    - Version: (Refer to Wt's official documentation for compatible versions)
    - [Official Website](https://www.webtoolkit.eu/wt)
    - Installation: Follow the installation guidelines provided by the official Wt documentation.

2. **SQLite3**: A C library that provides a lightweight disk-based database.
    - [Official Website](https://www.sqlite.org/)
    - Installation:

        - Depending on your OS, you can typically use a package manager. For example, on Ubuntu/Debian you can use the
          command:
          ```
          sudo apt-get install libsqlite3-dev
          ```

        - On macOS it is built-in.

3. **Asio** (Required for Crowcpp):
    - This library is essential for the network/server functionalities of Crowcpp.
    - Installation:

        - Depending on your OS, you can typically use a package manager. For example, on Ubuntu/Debian you can use the
          command:
          ```
          sudo apt-get install libasio-dev
          ```

        - On macOS you can use:
          ```
          brew install asio
          ```

4. **Qt**: A framework for cross-platform application and UI development
    - Used for developing sophisticated GUI applications.
    - [Official Website](https://www.qt.io/)
    - Installation: Follow the installation guidelines provided on the Qt website. Ensure compatibility with the version
      used in AirClip.

### Building from Source Code

#### Prerequisites

- A modern C++ compiler (e.g., GCC, Clang)
- CMake (Version 3.26 or higher recommended)
- Wt Library and its dependencies
- SQLite3
- Asio
- Qt 6.6

## Running the Application

1. **Clone the Repository:** Begin by cloning the AirClip repository to your local machine.
    ```
    git clone https://github.com/Sunmark25/AirClip.git
    ```

2. **Navigate to the Directory:** Change to the directory containing the source code.
    ```
    cd AirClip
    ```

3. **Create a Build Directory:** It's a good practice to keep build files separate from the source. Do this by creating
   a directory where the build files will be generated.
    ```
    mkdir build
    ```
    ```
    cd build
    ```

4. **Run CMake:** Use CMake to generate the build system.

   a. If Wt is installed in the standard directory, simply run:
    ```
    cmake ..
    ```

   b. Otherwise, if Wt is not installed in the standard directory, then you'll need to run the command below. And you'll
   to replace `[path_to_wt_config]` with the path to your `WtConfig.cmake` or `wt-config` file if it's not in the
   default system:
    ```
    cmake .. -DCMAKE_PREFIX_PATH=[path_to_wt_config]
    ``` 

5. **Build the project:** Compile the project using the build system generated by CMake.
    ```
    make
    ```
6. **Run the Application:**: After a successful build, you can run AirClip from the build directory:
    ```
    ./AirClip
    ```

## Usage Guide

#### Getting Started with AirClip

- **Accessing the Web Interface:** Open your web browser and navigate to the AirClip application URL.
- **Logging In:** Use your credentials to log in, or register if you're a new user.

#### Managing Clipboard History

- **Viewing Clipboard History:**
    - Access your clipboard history via the dashboard.

- **Synchronizing Clipboard Across Devices**
    - Setting Up: Ensure AirClip is installed on all devices you want to synchronize.
    - Sync in Action: Copy items on one device and find them available on all other connected devices.

## Troubleshooting

### Common Issues and Solutions

- App Not Syncing: Check your internet connection and ensure all devices are logged into the same account.
- Installation Errors: Verify system requirements and ensure all dependencies are installed.

### Frequently Asked Questions (FAQs)

- Q: Can I use AirClip on multiple devices simultaneously?
    - A: Yes, AirClip supports multi-device synchronization.

## Authors

- Jarrett Norman Joseph Boersen (jboerse2@uwo.ca)
- Robert Ghita (rghita@uwo.ca)
- Yaopeng Xie (yxie447@uwo.ca)
- Binchi Zhang (bzhan484@uwo.ca)
- Tingrui Zhang (tzhan425@uwo.ca)