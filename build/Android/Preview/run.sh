#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Targets/Android/run.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" .
    exit $?
    ;;
uninstall)
    echo "Uninstalling com.apps.ar_example"
    /Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe adb uninstall "com.apps.ar_example"
    exit $?
    ;;
esac

/Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe launch-apk "AR_example.apk" \
    --package=com.apps.ar_example \
    --activity=AR_example \
    --sym-dir="app/src/main/.uno" \
    "$@"
