## cmake插件配置

```json
"cmake.options.statusBarVisibility": "visible",
"cmake.options.advanced": {
    "build": {
        "statusBarVisibility": "inherit",
        "inheritDefault": "visible"
    },
    "launch": {
        "statusBarVisibility": "inherit",
        "inheritDefault": "visible"
    },
    "debug": {
        "statusBarVisibility": "inherit",
        "inheritDefault": "visible"
    },
    "variant": {
        "statusBarVisibility": "inherit",
        "inheritDefault": "visible"
    }
}
```

## 如何配置x64位

在CmakePresets.json中修改configurePresets:

```json
 "configurePresets": [
        {
            "name": "Demo",
            "displayName": "Visual Studio Community 2022 Release - amd64_x86",
            "description": "Using compilers for Visual Studio 17 2022 (x64_x86 architecture)",
            "generator": "Visual Studio 17 2022",
            "toolset": "host=x64",
            "architecture": "x64", // 改这里
            "binaryDir": "${sourceDir}/out/build/${presetName}",
            "cacheVariables": {
                "CMAKE_INSTALL_PREFIX": "${sourceDir}/out/install/${presetName}",
                "CMAKE_C_COMPILER": "cl.exe",
                "CMAKE_CXX_COMPILER": "cl.exe"
            }
        }
    ],
```
