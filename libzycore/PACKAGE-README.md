# libzycore - A C library

The `libzycore` C library provides platform-independent types, macros, and fallbacks for environments without LibC.

## Usage

To start using `libzycore` in your project, add the following [`depends`](https://build2.org/bpkg/doc/build2-package-manager-manual.xhtml#manifest-package-depends) value to your [`manifest`](https://build2.org/bpkg/doc/build2-package-manager-manual.xhtml#manifests), adjusting the version constraint as appropriate:

```
depends: libzycore ^1.5.1
```

Then import the library in your `buildfile`:

```
import libs = libzycore%lib{zycore}
```

## Importable targets

This package provides the following importable targets:

```
lib{zycore}
```

### Importable targets description

* `zycore` - C library for platform-independent types, macros, and fallbacks for environments without LibC.
