/*eslint-env node, mocha */

require('should');

var format = require('util').format;


describe('Find the first non-repeated character in a String', function() {
  var given = 'aaaaacadcccb';
  var expect = 'd';

  describe(format('Given: [%s], Expect: %s', given, expect), function() {

    it('should find `d`', function() {
      var result = require('./first_non_repeated_char').find(given);
      result.should.equal(expect);
    });

  })
})
