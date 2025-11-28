# Gradle（グレイドル） 

`gradlew`


* `build.gradle`(read by `./gradlew build`)

```gradle
// Plug in
plugins {
    id 'com.android.application'
}

// Android Setting
android {
    // Android SDK version
    compileSdk 34
    
    defaultConfig {
        applicationId "com.example.myapp"
        // required Android version
        minSdk 21
        targetSdk 34
        // version code
        versionCode 1
        // App version(visible to user)
        versionName "1.0"
    }
    
    buildTypes {
        release {
            minifyEnabled false
        }
    }
}


dependencies {
    implementation 'androidx.appcompat:appcompat:1.6.1'
    implementation 'androidx.constraintlayout:constraintlayout:2.1.4'
    testImplementation 'junit:junit:4.13.2'
}

```


* `./gradlew clean`
* Clean build all output

**Android**


* `./gradlew installDebug`
1. Compile .java → .class → .dex (Android format)
2. Prepare assets, XML
3. Create `app-debug.apk`
4. Debug Signiture

```
plugins {
    id 'com.android.application'  ← required
}
```