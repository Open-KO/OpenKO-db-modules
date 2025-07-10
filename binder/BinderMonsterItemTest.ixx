module;

#include <nanodbc/nanodbc.h>
#include <string>
#include <unordered_map>

export module Binder:MonsterItemTest;

import Model;

namespace binder
{
	/// \brief generated nanodbc column binder for model::BinderMonsterItemTest
	export class MonsterItemTestBinder
	{
	/// \publicsection
	public:
		typedef void (*BindColumnFunction_t)(model::MonsterItemTest& m, const nanodbc::result& result, short colIndex);

		using BindingsMapType = std::unordered_map<std::string, BindColumnFunction_t>;

		/// \brief Returns the binding function associated with the column name
		static const BindingsMapType& GetColumnBindings()
		{
			static const BindingsMapType bindingsMap =
			{
				{"sIndex", &MonsterItemTest::BindIndex},
				{"iItem01", &MonsterItemTest::BindItem1},
				{"sPersent01", &MonsterItemTest::BindPercent1},
				{"iItem02", &MonsterItemTest::BindItem2},
				{"sPersent02", &MonsterItemTest::BindPercent2},
				{"iItem03", &MonsterItemTest::BindItem3},
				{"sPersent03", &MonsterItemTest::BindPercent3},
				{"iItem04", &MonsterItemTest::BindItem4},
				{"sPersent04", &MonsterItemTest::BindPercent4},
				{"iItem05", &MonsterItemTest::BindItem5},
				{"sPersent05", &MonsterItemTest::BindPercent5}
			};
			return bindingsMap;
		}

		/// \brief Binds a result's column to Index
		static void BindIndex(model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			result.get_ref<int16_t>(colIndex, m.Index);
		}

		/// \brief Binds a result's column to Item1
		static void BindItem1(model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			m.Item1 = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to Percent1
		static void BindPercent1(model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			m.Percent1 = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Item2
		static void BindItem2(model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			m.Item2 = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to Percent2
		static void BindPercent2(model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			m.Percent2 = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Item3
		static void BindItem3(model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			m.Item3 = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to Percent3
		static void BindPercent3(model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			m.Percent3 = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Item4
		static void BindItem4(model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			m.Item4 = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to Percent4
		static void BindPercent4(model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			m.Percent4 = result.get<int16_t>(colIndex);
		}

		/// \brief Binds a result's column to Item5
		static void BindItem5(model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			m.Item5 = result.get<int32_t>(colIndex);
		}

		/// \brief Binds a result's column to Percent5
		static void BindPercent5(model::MonsterItemTest& m, const nanodbc::result& result, short colIndex)
		{
			m.Percent5 = result.get<int16_t>(colIndex);
		}

	};
}
