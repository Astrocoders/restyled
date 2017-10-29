# bs-restyled

[![Greenkeeper badge](https://badges.greenkeeper.io/Astrocoders/restyled.svg)](https://greenkeeper.io/)
[![Build Status](https://travis-ci.org/Astrocoders/restyled.svg?branch=master)](https://travis-ci.org/Astrocoders/restyled)

Styled Components concept for Reason

## Install

`yarn add bs-styled`
Then add it to your bs-dependencies

```js
{
  "name": "myapp",
  "reason": {
    "react-jsx": 2
  },
  "bs-dependencies": ["bs-react-native", "reason-react", "bs-restyled"],
  "bsc-flags": ["-bs-super-errors"],
}
```


## Usage

```ml
module Wrapper = Styled.View {
  type styleParams = unit;
  let style _ => Style.(style [flex 1., flexDirection `column, justifyContent `center]);
};

let component = ReasonReact.statelessComponent "MyView";
let make _children => {
  ...component,
  render: fun _self =>
    <Wrapper>
      ...anything else...
    </Wrapper>
}
```

Take a look in the REStyled.re for more

### Acknowledgments

Thanks everyone in Reason Discord for pointing me directions and specially to Jared who proposed this usage to me here https://gist.github.com/jaredly/a5e0102c060b7a1b40525d41f87843a8
