# calc

This is companion code for the blogpost [rolflekang.com/creating-a-cli-with-reason-native](https://rolflekang.com/creating-a-cli-with-reason-native).

## Developing:

```shell
npm install -g esy
git clone git@github.com:relekang/reason-calculator.git
esy install
esy build
```

## Running Binary:

After building the project, you can run the main binary that is produced.

```shell
esy x CalcApp.exe
```

## Running Tests:

```shell
# Runs the "test" command in `package.json`.
esy test
```

## Creating release binary for current env

```shell
esy test
```

