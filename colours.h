const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#111313", /* black   */
  [1] = "#AFA98E", /* red     */
  [2] = "#8FA9A9", /* green   */
  [3] = "#E29F8D", /* yellow  */
  [4] = "#ABCABB", /* blue    */
  [5] = "#E0D7B2", /* magenta */
  [6] = "#EBDBB2", /* cyan    */
  [7] = "#e1e6d8", /* white   */

  /* 8 bright colors */
  [8]  = "#9da197",  /* black   */
  [9]  = "#AFA98E",  /* red     */
  [10] = "#8FA9A9", /* green   */
  [11] = "#E29F8D", /* yellow  */
  [12] = "#ABCABB", /* blue    */
  [13] = "#E0D7B2", /* magenta */
  [14] = "#EBDBB2", /* cyan    */
  [15] = "#e1e6d8", /* white   */

  /* special colors */
  [256] = "#111313", /* background */
  [257] = "#e1e6d8", /* foreground */
  [258] = "#e1e6d8",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
