module.exports = {
    // 换行宽度，当代码宽度达到多少时换行
    printWidth: 800,
    // 缩进的空格数量
    tabWidth: 4,
    // 是否使用制表符代替空格
    useTabs: false,
    // 是否在代码块结尾加上分号
    semi: true,
    // 是否使用单引号替代双引号
    singleQuote: false,
    quoteProps: "as-needed",
    jsxSingleQuote: true,
    trailingComma: "none",
    // 在对象，数组括号与文字之间加空格 "{ foo: bar }"
    bracketSpacing: false,
    // 把多行HTML (HTML, JSX, Vue, Angular)元素的>放在最后一行的末尾，而不是单独放在下一行(不适用于自关闭元素)。
    bracketSameLine: true,
    // 当箭头函数只有一个参数是否加括号
    arrowParens: "avoid",
    /**
     * 为HTML、Vue、Angular和Handlebars指定全局空格敏感性
     * @default "css"
     * @type {"css"|"strict"|"ignore"}
     */
    htmlWhitespaceSensitivity: "ignore",
    vueIndentScriptAndStyle: false,
    endOfLine: "crlf",
    singleAttributePerLine: true,
    disableLanguages: ["html"]
};
