In this folder I am showing you a simple CMakePresets.json.

Check CMakePresets.json for example of debug/release configurePresets and buildPresets.

To run executable using debug presets, run this command:
Debug:
```bash
cmake --preset Debug && cmake --build --preset DebugBuild && ./build/debug/my_project
```

To run executable using release presets, run this command:
Release:
```bash
cmake --preset Release && cmake --build --preset ReleaseBuild && ./build/release/my_project
```

Enjoy!
