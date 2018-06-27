static class TestDataEmptyArray {
      public static int[] get_array() {
          int arr[] = {};
          return arr;
      }
  }

  static class TestDataUniqueValues {
      public static int[] get_array() {
          int arr[] = {99,2};
          return arr;
      }

      public static int get_expected_result() {
         return 1;
      }
  }

  static class TestDataExactlyTwoDifferentMinimums {
      public static int[] get_array() {
          int arr[]={2,3,4,9,6,2};
          return arr;
      }

      public static int get_expected_result() {
          return 0;
      }
  }
