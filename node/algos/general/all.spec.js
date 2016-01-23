/*eslint-env node, mocha */

require('should');

var format = require('util').format;


describe('Find the most frequent integer in an array', function() {
  var given = [1, 2, 3, 3, 3, 4, 4, 5];
  var given = [3, 1, 2, 3, 4, 4, 3, 3, 4, 5];
  var expect = 3;

  describe(format('Given: [%s], Expect: %s', given, expect), function() {

    it('using arrays only', function() {
      var result = require('./most_frequent_integer').withArray(given);
      result.should.equal(expect);
    });

    it('using hashmap', function() {
      var result = require('./most_frequent_integer').withMap(given);
      result.should.equal(expect);
    });

  });
})
