[@bs.module "highlight.js/lib/highlight"]
external registerLanguage : (string, string) => unit = "registerLanguage";

[@bs.module "highlight.js/lib/highlight"] external configure : Js.t({..}) => unit = "configure";

[@bs.module "highlight.js/lib/highlight"]
external highlightBlock : LocalDom.Element.t => unit = "highlightBlock";
