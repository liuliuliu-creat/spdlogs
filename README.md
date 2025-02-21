# MyLoggerProject
#🎉 欢迎来到 MyLoggerProject！ 🎉
这是一个使用 spdlog 库的简单 C++ 日志示例，演示了如何将日志输出到控制台和日志文件 (logs.txt)。

#🚀 特性
- **双重输出**：日志同时输出到控制台和文件。
- **自定义格式**: 控制台日志带有颜色，文件日志更为详细
- **日志级别控制**: 支持 TRACE 到 CRITICAL 的所有日志级别。
- **易于集成**: 使用现代 CMake 进行依赖管理，轻松集成。

#🔧 环境要求

- spdlog 库（以下是安装说明）
- CMake 3.14+
- spdlog 库（以下是安装说明）

#📦 安装指南

### 安装 spdlog

#### Linux (Ubuntu/Debian)
```bash
sudo apt-get install libspdlog-dev
```
#### macOS (Homebrew)
```bash
brew install spdlog
```
#### Windows (vcpkg)
```bash
vcpkg install spdlog
```
🛠 构建项目
#### Clone the repository:
```bash
git clone https://github.com/liuliuliu-creat/spdlogs/tree/main
```
#### 创建构建目录并编译：
```bash
mkdir build
cd build
cmake ..
make
```
#🖥 示例输出
## 控制台输出

- **[12:34:56] Welcome to spdlog!
- **[12:34:56] [error] Some error message with arg: 1
- **File (logs.txt)
## File (logs.txt)
- **[2023-10-23 12:34:56] [info] Welcome to spdlog!
- **[2023-10-23 12:34:56] [error] Some error message with arg: 1

#Happy Logging! 🎉
