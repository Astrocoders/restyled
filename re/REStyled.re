open BsReactNative;

let get = (arg, default) =>
  switch arg {
  | None => default
  | Some(value) => value
  };

module type StyledConfig = {type styleParams; let style: option(styleParams) => Style.t;};

module type Element {
  let make: (~style: Style.t) => 'a;
};

module Styled = (Element: Element, Config: StyledConfig) => {
  let make = (~styled=?, ~style as additionalStyle=Style.(style([]))) =>
    Element.make(~style=Style.combine(Config.style(styled), additionalStyle));
};

module View = (Config: StyledConfig) => {
  let make = (~styled=?, ~style as additionalStyle=Style.(style([]))) =>
    View.make(~style=Style.combine(Config.style(styled), additionalStyle));
};

module Text = (Config: StyledConfig) => {
  let make = (~styled=?, ~style as additionalStyle=Style.(style([]))) =>
    Text.make(~style=Style.combine(Config.style(styled), additionalStyle));
};

module ScrollView = (Config: StyledConfig) => {
  let make = (~styled=?, ~style as additionalStyle=Style.(style([]))) =>
    ScrollView.make(~style=Style.combine(Config.style(styled), additionalStyle));
};

module TouchableOpacity = (Config: StyledConfig) => {
  let make = (~styled=?, ~style as additionalStyle=Style.(style([]))) =>
    TouchableOpacity.make(~style=Style.combine(Config.style(styled), additionalStyle));
};
module TextInput = (Config: StyledConfig) => {
  let make = (~styled=?, ~style as additionalStyle=Style.(style([]))) =>
    TextInput.make(~style=Style.combine(Config.style(styled), additionalStyle));
};

module Image = (Config: StyledConfig) => {
  let make = (~styled=?, ~style as additionalStyle=Style.(style([]))) =>
    Image.make(~style=Style.combine(Config.style(styled), additionalStyle));
};
